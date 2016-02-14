set( APPLICATION_NAME       "EWECloud" )
set( APPLICATION_EXECUTABLE "EWECloud" )
set( APPLICATION_DOMAIN     "cloud.ewe.de" )
set( APPLICATION_VENDOR     "EWECloud" )
set( APPLICATION_UPDATE_URL "https://updates.owncloud.com/client/" CACHE string "URL for updater" )

set( THEME_CLASS            "eweCloudTheme" )
set( APPLICATION_REV_DOMAIN "com.owncloud.desktopclient" )
set( WIN_SETUP_BITMAP_PATH  "${CMAKE_SOURCE_DIR}/admin/win/nsi/${OEM_BRAND}" )

set( MAC_INSTALLER_BACKGROUND_FILE "${CMAKE_SOURCE_DIR}/admin/osx/installer-background.png" CACHE STRING "The MacOSX installer background image")

set( THEME_INCLUDE          "${OEM_THEME_DIR}/oemtheme.h" )
# set( APPLICATION_LICENSE    "${OEM_THEME_DIR}/license.txt )

option( WITH_CRASHREPORTER "Build crashreporter" OFF )
set( CRASHREPORTER_SUBMIT_URL "https://crash-reports.owncloud.com/submit" CACHE string "URL for crash repoter" )
set( CRASHREPORTER_ICON ":/owncloud-icon.png" )

set( HIDE_SELECT_FOLDERS_FOR_SYNC 0 )
set( HIDE_OPEN_WEB_OWNCLOUD 0 )
set( HIDE_CONTEXT_MENU_ITEMS 0 )
