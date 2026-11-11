/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$SetWorldScaleToOne
void Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__SetWorldScaleToOne (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, UnityEngine_Transform_o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$SetWorldScaleToOne
   void Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__SetWorldScaleToOne
   (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, UnityEngine_Transform_o*
   obj, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__SetWorldScaleToOne_2985d78
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  
  if ((bRam0000000005c2d78e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2d78e = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (param_4 != 0) {
    uVar2 = UnityEngine_Transform__get_parent_4093368(param_4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Implicit_4081098(uVar2,0);
    if ((uVar3 & 1) == 0) {
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      fStack_30 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0xc);
      param_2 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x10);
    }
    else {
      lVar4 = UnityEngine_Transform__get_parent_4093368(param_4,0);
      if (lVar4 == 0) goto LAB_02a85e54;
      fStack_30 = (float)UnityEngine_Transform__get_lossyScale_4094658(lVar4,0);
    }
    fStack_30 = 1.0 / fStack_30;
    fStack_2c = 1.0 / param_2;
    uStack_28 = 0x3f800000;
    if (pcRam0000000005c3a650 == (code *)0x0) {
      pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
    }
    (*pcRam0000000005c3a650)(param_4,&fStack_30);
    return;
  }
LAB_02a85e54:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

