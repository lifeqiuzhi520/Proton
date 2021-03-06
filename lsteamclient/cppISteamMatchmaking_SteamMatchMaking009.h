#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList(void *);
extern void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(void *, const char *, const char *, ELobbyComparison);
extern void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(void *, const char *, int, ELobbyComparison);
extern void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(void *, const char *, int);
extern void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(void *, ELobbyDistanceFilter);
extern void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex(void *, int);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking009_CreateLobby(void *, ELobbyType, int);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking009_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData(void *, CSteamID, const char *, const char *);
extern int cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex(void *, CSteamID, int, char *, int, char *, int);
extern bool cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData(void *, CSteamID, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer(void *, CSteamID, uint32 *, uint16 *, CSteamID *);
extern bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit(void *, CSteamID, int);
extern int cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType(void *, CSteamID, ELobbyType);
extern bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable(void *, CSteamID, bool);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner(void *, CSteamID, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby(void *, CSteamID, CSteamID);
#ifdef __cplusplus
}
#endif
