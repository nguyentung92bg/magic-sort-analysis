/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardPlayerViewModel$$SetData
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o* __this, System_String_o* publicId, System_String_o* nickName, int32_t score, int32_t rank, bool isMe, System_String_o* imageUrl, System_String_o* imageId, System_String_o* tokenId, System_String_o* frameId, System_String_o* nameStyleId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardPlayerViewModel$$SetData
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o*
   __this, System_String_o* publicId, System_String_o* nickName, int32_t score, int32_t rank, bool
   isMe, System_String_o* imageUrl, System_String_o* imageId, System_String_o* tokenId,
   System_String_o* frameId, System_String_o* nameStyleId, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData_2aef0b0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,byte param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 02bef0c4 to 02cef0ef has its CatchHandler @ 02bef1d4 */
  *(undefined8 *)(param_1 + 0x10) = param_2;
                    /* try { // try from 02bef0f0 to 02cef0f7 has its CatchHandler @ 02bef1d0 */
  FUN_012d0d74();
                    /* try { // try from 02bef0f8 to 02cef1bf has its CatchHandler @ 02beef50 */
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(byte *)(param_1 + 0x28) = param_6 & 1;
  *(undefined8 *)(param_1 + 0x30) = param_7;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_7);
  *(undefined8 *)(param_1 + 0x38) = param_8;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_8);
  *(undefined8 *)(param_1 + 0x40) = param_9;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_9);
  *(undefined8 *)(param_1 + 0x48) = param_10;
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),param_10);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = param_11;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

