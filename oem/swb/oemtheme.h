#ifndef EWECLOUDTHEME_H
#define EWECLOUDTHEME_H

#include "owncloudtheme.h"

namespace OCC {
class swbCloudTheme : public ownCloudTheme
{
public:
    swbCloudTheme();
    QString appName() const Q_DECL_OVERRIDE;
    QString appNameGUI() const Q_DECL_OVERRIDE;
    QString overrideServerUrl() const Q_DECL_OVERRIDE;
    bool singleAccount() const;
    bool singleSyncFolder() const;
    QString helpUrl() const;
};
}

#endif // EWECLOUDTHEME_H
