/* IL2CPP: Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$Initialize
void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__Initialize (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$Initialize
   void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__Initialize
   (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__Initialize_2ae7c54
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
                    /* try { // try from 02be7c54 to 02ce7c7f has its CatchHandler @ 02be7c38 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be7c4c with catch @ 02be7c68
                        */
  if ((bRam0000000005c2eb62 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5048);
    bRam0000000005c2eb62 = 1;
  }
                    /* try { // try from 02be7c80 to 02ce7c83 has its CatchHandler @ 02be7cb0 */
  plVar9 = *(long **)(param_1 + 0x18);
                    /* try { // try from 02be7c84 to 02ce7cb3 has its CatchHandler @ 02be7c38 */
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 02be7c80 with catch @ 02be7cb0 */
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057e5048) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02be7cb4 with catch @ 02be7cd4
                       catch(type#2 @ 00000000) { ... } // from try @ 02be7ccc with catch @ 02be7cd4
                        */
                    /* try { // try from 02be7cd8 to 02ce7d5b has its CatchHandler @ 02be7cd8
                       catch() { ... } // from try @ 02be7cd8 with catch @ 02be7cd8
                       catch() { ... } // from try @ 02be7e1c with catch @ 02be7cd8
                       catch() { ... } // from try @ 02be7ea4 with catch @ 02be7cd8 */
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto FUN_012d0d74;
      }
                    /* try { // try from 02be7cb4 to 02ce7cbf has its CatchHandler @ 02be7cd4 */
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 02be7cc0 to 02ce7ccb has its CatchHandler @ 02be7c38 */
  puVar4 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057e5048,1);
                    /* try { // try from 02be7ccc to 02ce7cd3 has its CatchHandler @ 02be7cd4 */
FUN_012d0d74:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = uVar5;
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

