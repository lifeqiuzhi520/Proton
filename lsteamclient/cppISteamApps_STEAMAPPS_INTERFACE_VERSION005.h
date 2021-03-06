#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled(void *, AppId_t);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend(void *);
extern int cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex(void *, int, AppId_t *, bool *, char *, int);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName(void *, char *, int);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt(void *, bool);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots(void *, DepotId_t *, uint32);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir(void *, AppId_t, char *, uint32);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled(void *, AppId_t);
#ifdef __cplusplus
}
#endif
