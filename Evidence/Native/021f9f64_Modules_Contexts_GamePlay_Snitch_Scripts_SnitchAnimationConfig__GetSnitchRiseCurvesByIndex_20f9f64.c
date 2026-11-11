/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchRiseCurvesByIndex
System_ValueTuple_AnimationCurve__AnimationCurve__o Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseCurvesByIndex (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchRiseCurvesByIndex
   System_ValueTuple_AnimationCurve__AnimationCurve__o
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseCurvesByIndex
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t index, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseCurvesByIndex_20f9f64
          (long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c29797 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a68d8);
    FUN_012d0dc8(PTR_DAT_0579be10);
    FUN_012d0dc8(PTR_DAT_0577a798);
    bRam0000000005c29797 = 1;
  }
  puVar3 = PTR_DAT_0579be10;
  puVar2 = PTR_DAT_0577a798;
  if (-1 < param_2) {
    lVar4 = *(long *)(param_1 + 0xf8);
    if (lVar4 == 0) {
LAB_021fa060:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (param_2 < *(int *)(lVar4 + 0x18)) {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_021fa060;
      if (param_2 < *(int *)(*(long *)(param_1 + 0x100) + 0x18)) {
        uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar4,param_2,*(undefined8 *)PTR_DAT_0579be10);
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_021fa060;
        uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x100),param_2,*(undefined8 *)puVar3);
        uVar7 = *(undefined8 *)puVar2;
        goto LAB_021fa044;
      }
    }
  }
  uVar7 = *(undefined8 *)PTR_DAT_0577a798;
  uVar5 = 0;
  uVar6 = 0;
LAB_021fa044:
  uStack_38 = 0;
  uStack_40 = 0;
  System_ValueTuple_object__object____ctor_2b92f7c(&uStack_40,uVar5,uVar6,uVar7);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}

