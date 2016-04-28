#include "oemtheme.h"
#include "config.h"

#include <QDebug>
#include <QColor>

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
//    return QLatin1String("https://mediencenter-fut.ewetel.de");
//    return QLatin1String("http://cloud.appmodule.rs");
    return QLatin1String("https://mediencenter.osnanet.de");
}

bool osnatelCloudTheme::singleAccount() const
{
    return true;
}

QString osnatelCloudTheme::helpUrl() const
{
    return QString::null;
}

QString osnatelCloudTheme::termsUrl() const
{
    return QLatin1String("http://www.osnatel.de/info/impressum.htm");
}

QString osnatelCloudTheme::privacyUrl() const
{
    return QLatin1String("http://www.osnatel.de/datenschutz");
}

bool osnatelCloudTheme::singleSyncFolder() const
{
    return true;
}

#ifndef TOKEN_AUTH_ONLY
QColor osnatelCloudTheme::wizardHeaderBackgroundColor() const
{
    return QColor("#b90510");
}
#endif

}
