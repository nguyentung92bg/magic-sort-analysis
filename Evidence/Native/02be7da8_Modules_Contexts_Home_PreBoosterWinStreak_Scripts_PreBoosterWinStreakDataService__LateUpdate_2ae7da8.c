/* IL2CPP: Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$LateUpdate
void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__LateUpdate (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$LateUpdate
   void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__LateUpdate
   (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__LateUpdate_2ae7da8
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
                    /* try { // try from 02be7db4 to 02ce7dc3 has its CatchHandler @ 02be7e54 */
  if ((bRam0000000005c2eb63 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5048);
    bRam0000000005c2eb63 = 1;
  }
                    /* try { // try from 02be7dd4 to 02ce7df7 has its CatchHandler @ 02be7e58 */
  if (*(char *)(param_1 + 0x20) != '\0') {
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be7d84 with catch @ 02be7e5c
                        */
      FUN_012d0ef0();
    }
    lVar2 = *plVar5;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 02be7e0c to 02ce7e1b has its CatchHandler @ 02be7e64 */
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057e5048) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02be7e3c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
                    /* try { // try from 02be7e1c to 02ce7e7b has its CatchHandler @ 02be7cd8 */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057e5048,0);
LAB_02be7e3c:
    (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be7db4 with catch @ 02be7e54
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be7dd4 with catch @ 02be7e58
                        */
  return;
}

