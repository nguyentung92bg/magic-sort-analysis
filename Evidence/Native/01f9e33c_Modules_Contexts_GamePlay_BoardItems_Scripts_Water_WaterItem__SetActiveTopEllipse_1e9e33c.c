/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetActiveTopEllipse
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, bool active, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetActiveTopEllipse
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, bool active, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
               (long param_1,uint param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x50);
  if (lVar1 != 0) {
    lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar1,0,0);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,param_2 & 1,0);
}

