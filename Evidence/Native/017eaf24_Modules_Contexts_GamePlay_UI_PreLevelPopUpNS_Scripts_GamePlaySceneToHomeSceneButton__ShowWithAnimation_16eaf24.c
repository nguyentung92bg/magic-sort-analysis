/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.GamePlaySceneToHomeSceneButton$$ShowWithAnimation
void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__ShowWithAnimation (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.GamePlaySceneToHomeSceneButton$$ShowWithAnimation
   void 
   Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__ShowWithAnimation
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton_o* __this,
   float delay, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__ShowWithAnimation_16eaf24
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  
  if ((bRam0000000005c24b1c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b3248);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c24b1c = 1;
  }
  Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__Hide_16eb0cc
            (param_2);
  if (*(long *)(param_2 + 0x18) != 0) {
    *(undefined1 *)(*(long *)(param_2 + 0x18) + 0x1c) = 0;
    if (*(long *)(param_2 + 0x30) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_2 + 0x30),1,0);
      if (*(long *)(param_2 + 0x30) != 0) {
        lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_2 + 0x30),0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar7 != 0) {
          puVar9 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0(*puVar9,puVar9[1],puVar9[2],lVar7,0);
          puVar6 = PTR_DAT_057bbd38;
          puVar5 = PTR_DAT_057874c0;
          puVar4 = PTR_DAT_057606c8;
          if (*(long *)(param_2 + 0x30) != 0) {
            uVar8 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_2 + 0x30),0);
            uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                              (0x3f800000,*(undefined4 *)(param_2 + 0x20),uVar8,0);
            uVar8 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                              (param_1,uVar8,*(undefined8 *)puVar6);
            uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar8,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)puVar5);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            puVar4 = PTR_DAT_057984e0;
            if (lVar7 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar7,param_2,*(undefined8 *)PTR_DAT_057b3248,0);
              uVar8 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                (uVar8,lVar7,*(undefined8 *)puVar4);
              puVar10 = (undefined8 *)(param_2 + 0x38);
              *puVar10 = uVar8;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

