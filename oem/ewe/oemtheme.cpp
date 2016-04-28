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
//    return QLatin1String("http://fulda242.server4you.net/ocdaily");
//    return QLatin1String("https://mediencenter-fut.ewetel.de");
    return QLatin1String("https://mediencenter.ewe.de");
//    return QLatin1String("http://cloud.appmodule.rs");
}

bool eweCloudTheme::singleAccount() const
{
    return true;
}

QString eweCloudTheme::helpUrl() const
{
    return QString::null;
}

QString eweCloudTheme::termsUrl() const
{
    return QLatin1String("https://www.ewe.de/privatkunden/impressum");
}

QString eweCloudTheme::privacyUrl() const
{
    return QLatin1String("https://www.ewe.de/datenschutz");
}

bool eweCloudTheme::singleSyncFolder() const
{
    return true;
}

}
