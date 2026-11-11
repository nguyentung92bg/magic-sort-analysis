/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOLocalRotate
DG_Tweening_Core_TweenerCore_Quaternion__Vector3__QuaternionOptions__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate (Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* target, UnityEngine_Vector3_o endValue, float duration, int32_t mode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOLocalRotate
   DG_Tweening_Core_TweenerCore_Quaternion__Vector3__QuaternionOptions__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate
   (Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* target, UnityEngine_Vector3_o
   endValue, float duration, int32_t mode, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_057a4660;
  if ((bRam0000000005c2a647 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc890);
    FUN_012d0dc8(PTR_DAT_057df090);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f2688);
    FUN_012d0dc8(PTR_DAT_058151c8);
    FUN_012d0dc8(PTR_DAT_057d7e28);
    FUN_012d0dc8(PTR_DAT_057a4660);
    bRam0000000005c2a647 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057dc890;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    puVar6 = (undefined8 *)(lVar3 + 0x10);
    *puVar6 = param_5;
    FUN_012d0d74(puVar6,param_5);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057df090;
    if (lVar4 != 0) {
      DG_Tweening_Core_DOGetter_Quaternion____ctor_156d0cc
                (lVar4,lVar3,*(undefined8 *)PTR_DAT_058151c8,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057f2688;
      puVar1 = PTR_DAT_057815e0;
      if (lVar5 != 0) {
        DG_Tweening_Core_DOSetter_Quaternion____ctor_156e31c
                  (lVar5,lVar3,*(undefined8 *)PTR_DAT_057d7e28,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar3 = DG_Tweening_DOTween__To_1ed8ae4(param_1,param_2,param_3,param_4,lVar4,lVar5,0);
        DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                  (lVar3,*puVar6,*(undefined8 *)puVar2);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x148) = param_6;
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

