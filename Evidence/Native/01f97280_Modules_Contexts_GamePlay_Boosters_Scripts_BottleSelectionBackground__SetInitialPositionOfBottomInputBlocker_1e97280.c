/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$SetInitialPositionOfBottomInputBlocker
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__SetInitialPositionOfBottomInputBlocker (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, int32_t bottleRowCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$SetInitialPositionOfBottomInputBlocker
   void 
   Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__SetInitialPositionOfBottomInputBlocker
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, int32_t
   bottleRowCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__SetInitialPositionOfBottomInputBlocker_1e97280
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2815c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2815c = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_05805608), lVar2 != 0)) {
    lVar2 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetGameUIViewConfig_160c440
                      (lVar2,0);
    if (((*(long *)(param_1 + 0x68) != 0) &&
        (lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x68),0),
        lVar2 != 0)) && (lVar3 != 0)) {
      if (pcRam0000000005c3a620 == (code *)0x0) {
        pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
      }
      (*pcRam0000000005c3a620)(lVar3,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

