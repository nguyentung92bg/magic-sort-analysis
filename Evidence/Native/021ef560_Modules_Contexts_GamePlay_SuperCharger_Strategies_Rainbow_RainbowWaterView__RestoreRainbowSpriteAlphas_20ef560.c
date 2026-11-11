/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$RestoreRainbowSpriteAlphas
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__RestoreRainbowSpriteAlphas (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$RestoreRainbowSpriteAlphas
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__RestoreRainbowSpriteAlphas
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__RestoreRainbowSpriteAlphas_20ef560
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
                    /* try { // try from 021ef574 to 022ef57b has its CatchHandler @ 021ef724 */
  if ((bRam0000000005c2974d & 1) == 0) {
                    /* try { // try from 021ef57c to 022ef59b has its CatchHandler @ 021ef7c4 */
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_05759438);
    FUN_012d0dc8(PTR_DAT_057c2298);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c2974d = 1;
  }
  puVar2 = PTR_DAT_057c2298;
  puVar1 = PTR_DAT_0576d090;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x28) + 0x20) == 0) {
      return;
    }
                    /* try { // try from 021ef5dc to 022ef607 has its CatchHandler @ 021ef72c */
    iVar6 = 0;
    while( true ) {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return;
      }
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar5 == 0)) break;
      if (*(int *)(lVar5 + 0x18) <= iVar6) {
        return;
      }
      uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar6,*(undefined8 *)puVar2);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar3 == 0)) break;
      System_Collections_Generic_List_float___get_Item_1d70b20(lVar3,iVar6,*(undefined8 *)puVar1);
      Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha_20ef304
                (uVar4);
      lVar3 = *(long *)(param_1 + 0x18);
      iVar6 = iVar6 + 1;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 021ef648 to 022ef66f has its CatchHandler @ 021ef728 */
  FUN_012d0ef0();
}

