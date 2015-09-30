#include "oemtheme.h"
#include "owncloudtheme.h"
#include "config.h"

#include <QDebug>

namespace OCC {
eweCloudTheme::eweCloudTheme() : ownCloudTheme()
{
    qDebug() << " ** running eweCloud theme!";
}

QString eweCloudTheme::appName() const
{
    return QLatin1String("EWECloud");
}

QString eweCloudTheme::appNameGUI() const
{
    return QLatin1String("EWECloud");
}

QString eweCloudTheme::overrideServerUrl() const
{
    return QLatin1String("http://fulda242.server4you.net/ocdaily");
}

bool eweCloudTheme::singleAccount() const
{
    return true;
}

QString eweCloudTheme::helpUrl() const
{
    return QLatin1String("http://ewe.de");
}

bool eweCloudTheme::singleSyncFolder() const
{
    return true;
}

}
