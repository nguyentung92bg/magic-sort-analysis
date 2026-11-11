/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOSizeDelta
DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOSizeDelta (UnityEngine_SpriteRenderer_o* target, UnityEngine_Vector3_o endValue, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOSizeDelta
   DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOSizeDelta
   (UnityEngine_SpriteRenderer_o* target, UnityEngine_Vector3_o endValue, float duration, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOSizeDelta_2306b8c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_057c2068;
  if ((bRam0000000005c2a645 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f050);
    FUN_012d0dc8(PTR_DAT_0580e4a0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05809208);
    FUN_012d0dc8(PTR_DAT_0578c030);
    FUN_012d0dc8(PTR_DAT_057c4720);
                    /* try { // try from 02406c14 to 02506c3b has its CatchHandler @ 02406dcc */
    FUN_012d0dc8(PTR_DAT_057c2068);
    bRam0000000005c2a645 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0577f050;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = param_5;
                    /* try { // try from 02406c54 to 02506cb7 has its CatchHandler @ 02406dd0 */
    FUN_012d0d74(puVar7,param_5);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0580e4a0;
    if (lVar4 != 0) {
      DG_Tweening_Core_DOGetter_Vector3____ctor_156d7c4
                (lVar4,lVar3,*(undefined8 *)PTR_DAT_0578c030,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_05809208;
      puVar1 = PTR_DAT_057815e0;
      if (lVar5 != 0) {
        DG_Tweening_Core_DOSetter_Vector3____ctor_156ebf4
                  (lVar5,lVar3,*(undefined8 *)PTR_DAT_057c4720,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
                    /* try { // try from 02406ce8 to 02506cf7 has its CatchHandler @ 02406dc8 */
        uVar6 = DG_Tweening_DOTween__To_1ed8974(param_1,param_2,param_3,param_4,lVar4,lVar5,0);
                    /* try { // try from 02406cf8 to 02506db7 has its CatchHandler @ 02406904 */
        DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                  (uVar6,*puVar7,*(undefined8 *)puVar2);
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

