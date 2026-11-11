/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$Awake
void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__Awake (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$Awake
   void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__Awake
   (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__Awake_3756414
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__SetWaterRandomOffsetTime_375644c();
  lVar1 = UnityEngine_Component__get_transform_408b444(param_4,0);
  if (lVar1 != 0) {
                    /* try { // try from 03856430 to 03956457 has its CatchHandler @ 03856698 */
    uVar2 = UnityEngine_Transform__get_position_4092b08(lVar1,0);
    *(undefined4 *)(param_4 + 0x30) = uVar2;
    *(undefined4 *)(param_4 + 0x34) = param_2;
    *(undefined4 *)(param_4 + 0x38) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

