#include "oemtheme.h"
#include "owncloudtheme.h"
#include "config.h"

#include <QDebug>
#include <QColor>

namespace OCC {
swbCloudTheme::swbCloudTheme() : ownCloudTheme()
{
    qDebug() << " ** running swbCloud theme!";
}

QString swbCloudTheme::appName() const
{
    return QLatin1String("swbCloud");
}

QString swbCloudTheme::appNameGUI() const
{
    return QLatin1String("swbCloud");
}

QString swbCloudTheme::overrideServerUrl() const
{
//    return QLatin1String("http://fulda242.server4you.net/ocdaily");
//    return QLatin1String("https://mediencenter-fut.ewetel.de");
    return QLatin1String("https://mediencenter.swb-gruppe.de");
//    return QLatin1String("http://cloud.appmodule.rs");
}

bool swbCloudTheme::singleAccount() const
{
    return true;
}

QString swbCloudTheme::helpUrl() const
{
    return QString::null;
}

QString swbCloudTheme::termsUrl() const
{
    return QLatin1String("https://www.swb-gruppe.de/modal/impressum.php");
}

QString swbCloudTheme::privacyUrl() const
{
    return QLatin1String("https://www.swb-gruppe.de/datenschutz");
}

bool swbCloudTheme::singleSyncFolder() const
{
    return true;
}

#ifndef TOKEN_AUTH_ONLY
QColor swbCloudTheme::wizardHeaderBackgroundColor() const
{
    return QColor("#E30613");
}
#endif

}
