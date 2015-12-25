#ifndef OSNATELCLOUDTHEME_H
#define OSNATELCLOUDTHEME_H

#include "owncloudtheme.h"

namespace OCC {
class osnatelCloudTheme : public ownCloudTheme
{
public:
    osnatelCloudTheme();
    QString appName() const Q_DECL_OVERRIDE;
    QString appNameGUI() const Q_DECL_OVERRIDE;
    QString overrideServerUrl() const Q_DECL_OVERRIDE;
    bool singleAccount() const;
    bool singleSyncFolder() const;
    QString helpUrl() const;
};
}

#endif // OSNATELCLOUDTHEME_H
