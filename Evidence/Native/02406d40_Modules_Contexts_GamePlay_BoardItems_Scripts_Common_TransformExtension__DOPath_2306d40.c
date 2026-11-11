/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOPath
DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOPath (Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* target, UnityEngine_Vector3_array* path, float duration, int32_t pathType, int32_t pathMode, int32_t resolution, System_Nullable_Color__o gizmoColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.TransformExtension$$DOPath
   DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOPath
   (Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* target, UnityEngine_Vector3_array*
   path, float duration, int32_t pathType, int32_t pathMode, int32_t resolution,
   System_Nullable_Color__o gizmoColor, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOPath_2306d40
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar1 = PTR_DAT_057609a8;
  if ((bRam0000000005c2a648 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f050);
    FUN_012d0dc8(PTR_DAT_0580e4a0);
    FUN_012d0dc8(PTR_DAT_05761528);
                    /* try { // try from 02406db8 to 02506dbb has its CatchHandler @ 02406dc4 */
                    /* try { // try from 02406dbc to 02506de7 has its CatchHandler @ 02406904 */
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02406db8 with catch @ 02406dc4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02406ce8 with catch @ 02406dc8
                        */
    FUN_012d0dc8(PTR_DAT_057f61e0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02406c14 with catch @ 02406dcc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02406c54 with catch @ 02406dd0
                        */
    FUN_012d0dc8(PTR_DAT_0575d7d0);
    FUN_012d0dc8(PTR_DAT_0578ae10);
                    /* try { // try from 02406de8 to 02506deb has its CatchHandler @ 02406e6c */
    FUN_012d0dc8(PTR_DAT_05818ec0);
    FUN_012d0dc8(PTR_DAT_057609a8);
    bRam0000000005c2a648 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0577f050;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    puVar8 = (undefined8 *)(lVar4 + 0x10);
    *puVar8 = param_2;
                    /* try { // try from 02406e30 to 02506e57 has its CatchHandler @ 02406e78 */
    FUN_012d0d74(puVar8,param_2);
    if (param_6 < 2) {
      param_6 = 1;
    }
    uVar5 = DG_Tweening_Plugins_PathPlugin__Get_361ca44(0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0580e4a0;
                    /* try { // try from 02406e58 to 02506e63 has its CatchHandler @ 02406904 */
    if (lVar6 != 0) {
                    /* try { // try from 02406e64 to 02506e6b has its CatchHandler @ 02406e78 */
                    /* catch() { ... } // from try @ 02406de8 with catch @ 02406e6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02406e30 with catch @ 02406e78
                       catch(type#2 @ 00000000) { ... } // from try @ 02406e64 with catch @ 02406e78
                        */
      DG_Tweening_Core_DOGetter_Vector3____ctor_156d7c4
                (lVar6,lVar4,*(undefined8 *)PTR_DAT_0578ae10,0);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057f61e0;
      if (lVar7 != 0) {
        DG_Tweening_Core_DOSetter_Vector3____ctor_156ebf4
                  (lVar7,lVar4,*(undefined8 *)PTR_DAT_05818ec0,0);
        uStack_80 = *(undefined4 *)(param_7 + 2);
        uStack_88 = param_7[1];
        uStack_90 = *param_7;
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar3 = PTR_DAT_057815e0;
        puVar2 = PTR_DAT_05761528;
        puVar1 = PTR_DAT_0575d7d0;
        if (lVar4 != 0) {
          uStack_a8 = uStack_88;
          uStack_b0 = uStack_90;
          uStack_a0 = uStack_80;
          DG_Tweening_Plugins_Core_PathCore_Path___ctor_3628778
                    (lVar4,param_4,param_3,param_6,&uStack_b0,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar5 = DG_Tweening_DOTween__To_Vector3__object__PathOptions__240a028
                            (param_1,uVar5,lVar6,lVar7,lVar4,*(undefined8 *)puVar2);
          lVar4 = DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                            (uVar5,*puVar8,*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            *(undefined4 *)(lVar4 + 0x140) = param_5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

