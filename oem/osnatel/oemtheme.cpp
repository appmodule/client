#include "oemtheme.h"
#include "owncloudtheme.h"
#include "config.h"

#include <QDebug>

namespace OCC {
osnatelCloudTheme::osnatelCloudTheme() : ownCloudTheme()
{
    qDebug() << " ** running osnatelCloud theme!";
}

QString osnatelCloudTheme::appName() const
{
    return QLatin1String("osnatelCloud");
}

QString osnatelCloudTheme::appNameGUI() const
{
    return QLatin1String("osnatelCloud");
}

QString osnatelCloudTheme::overrideServerUrl() const
{
//    return QLatin1String("http://fulda242.server4you.net/ocdaily");
    return QLatin1String("https://mediencenter-fut.ewetel.de");
}

bool osnatelCloudTheme::singleAccount() const
{
    return true;
}

QString osnatelCloudTheme::helpUrl() const
{
    return QLatin1String("https://www.osnatel.de");
}

bool osnatelCloudTheme::singleSyncFolder() const
{
    return true;
}

}
