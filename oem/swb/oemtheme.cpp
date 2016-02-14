#include "oemtheme.h"
#include "owncloudtheme.h"
#include "config.h"

#include <QDebug>

namespace OCC {
swbCloudTheme::swbCloudTheme() : ownCloudTheme()
{
    qDebug() << " ** running swbCloud theme!";
}

QString swbCloudTheme::appName() const
{
    return QLatin1String("SWBCloud");
}

QString swbCloudTheme::appNameGUI() const
{
    return QLatin1String("SWBCloud");
}

QString swbCloudTheme::overrideServerUrl() const
{
//    return QLatin1String("http://fulda242.server4you.net/ocdaily");
    return QLatin1String("https://mediencenter-fut.ewetel.de");
}

bool swbCloudTheme::singleAccount() const
{
    return true;
}

QString swbCloudTheme::helpUrl() const
{
    return QLatin1String("https://www.swb-gruppe.de/");
}

bool swbCloudTheme::singleSyncFolder() const
{
    return true;
}

}
