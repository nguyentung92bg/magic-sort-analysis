/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$<TryStartTutorial>b__8_0
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial___TryStartTutorial_b__8_0 (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$<TryStartTutorial>b__8_0
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial___TryStartTutorial_b__8_0
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial___TryStartTutorial_b__8_0_3fb66b0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000005c39087 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576bb90);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057bbc20);
    FUN_012d0dc8(PTR_DAT_057c3cb0);
    bRam0000000005c39087 = 1;
  }
  if (*(long *)(param_4 + 0x70) != 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x30);
    lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x70),0);
    if (lVar3 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_position_4092b08(lVar3,0);
      lVar3 = *(long *)(param_4 + 0x40);
      if (lVar3 != 0) {
        param_2 = param_2 + *(float *)(lVar3 + 0x28);
        param_3 = param_3 + *(float *)(lVar3 + 0x2c);
        uVar4 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                          (fVar5 + *(float *)(lVar3 + 0x24),param_2,param_3,
                           *(undefined4 *)(lVar3 + 0x20),uVar4,0,0);
        if ((*(long *)(param_4 + 0x78) != 0) &&
           (lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x78),0),
           lVar3 != 0)) {
          fVar5 = (float)UnityEngine_Transform__get_position_4092b08(lVar3,0);
          lVar3 = *(long *)(param_4 + 0x40);
          if (lVar3 != 0) {
            uVar4 = DG_Tweening_TweenSettingsExtensions__From_Vector3__Vector3__VectorOptions__2450470
                              (fVar5 + *(float *)(lVar3 + 0x24),param_2 + *(float *)(lVar3 + 0x28),
                               param_3 + *(float *)(lVar3 + 0x2c),uVar4,1,0,
                               *(undefined8 *)PTR_DAT_0576bb90);
            puVar2 = PTR_DAT_057c3cb0;
            puVar1 = PTR_DAT_057bbc20;
            if (*(long *)(param_4 + 0x40) != 0) {
              uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar4,*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x30),
                                 *(undefined8 *)PTR_DAT_057874c0);
              lVar3 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__2451144
                                (uVar4,999,0,*(undefined8 *)puVar2);
              uVar4 = *(undefined8 *)puVar1;
              if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
                *(long *)(lVar3 + 0x30) = param_4;
                FUN_012d0d74((long *)(lVar3 + 0x30),param_4,uVar4);
              }
              return lVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

