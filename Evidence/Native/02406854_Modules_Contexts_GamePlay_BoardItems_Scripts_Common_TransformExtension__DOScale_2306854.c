/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOScale
DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale (Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* target, UnityEngine_Vector3_o endValue, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOScale
   DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale
   (Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* target, UnityEngine_Vector3_o
   endValue, float duration, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
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
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 024067dc with catch @ 02406854
                       try { // try from 02406854 to 0250686b has its CatchHandler @ 02406784 */
  puVar1 = PTR_DAT_057c3d00;
                    /* try { // try from 0240686c to 02506883 has its CatchHandler @ 024068f0 */
                    /* try { // try from 02406884 to 025068df has its CatchHandler @ 02406784 */
  if ((bRam0000000005c2a643 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f050);
    FUN_012d0dc8(PTR_DAT_0580e4a0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05809208);
    FUN_012d0dc8(PTR_DAT_057dd4d8);
    FUN_012d0dc8(PTR_DAT_057d5d58);
                    /* try { // try from 024068e0 to 025068ef has its CatchHandler @ 024068f0 */
    FUN_012d0dc8(PTR_DAT_057c3d00);
    bRam0000000005c2a643 = 1;
  }
                    /* catch() { ... } // from try @ 0240686c with catch @ 024068f0
                       catch() { ... } // from try @ 024068e0 with catch @ 024068f0 */
                    /* try { // try from 024068f4 to 025068f7 has its CatchHandler @ 02406900 */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0577f050;
                    /* try { // try from 024068f8 to 02506903 has its CatchHandler @ 02406784 */
  if (lVar3 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024068f4 with catch @ 02406900
                        */
                    /* try { // try from 02406904 to 02506c13 has its CatchHandler @ 02406904
                       catch() { ... } // from try @ 02406904 with catch @ 02406904
                       catch() { ... } // from try @ 02406cf8 with catch @ 02406904
                       catch() { ... } // from try @ 02406dbc with catch @ 02406904
                       catch() { ... } // from try @ 02406e58 with catch @ 02406904 */
    System_Object___ctor_23dfe5c(lVar3,0);
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = param_5;
    FUN_012d0d74(puVar7,param_5);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0580e4a0;
    if (lVar4 != 0) {
      DG_Tweening_Core_DOGetter_Vector3____ctor_156d7c4
                (lVar4,lVar3,*(undefined8 *)PTR_DAT_057dd4d8,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_05809208;
      puVar1 = PTR_DAT_057815e0;
      if (lVar5 != 0) {
        DG_Tweening_Core_DOSetter_Vector3____ctor_156ebf4
                  (lVar5,lVar3,*(undefined8 *)PTR_DAT_057d5d58,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar6 = DG_Tweening_DOTween__To_1ed8974(param_1,param_2,param_3,param_4,lVar4,lVar5,0);
        DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                  (uVar6,*puVar7,*(undefined8 *)puVar2);
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

