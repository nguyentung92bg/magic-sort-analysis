/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LoadingbarView$$Show
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView__Show (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LoadingbarView$$Show
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView__Show
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView__Show_16e9050(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000005c24b52 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758e60);
    bRam0000000005c24b52 = 1;
  }
  puVar7 = (undefined8 *)(param_1 + 0x18);
  DG_Tweening_TweenExtensions__Kill_1edd6a4(*puVar7,0,0);
  lVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar4 = PTR_DAT_05758e60;
  if (lVar5 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
    uVar6 = UnityEngine_Component__get_transform_408b444(param_1,0);
    uVar6 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c(0,0,0xc3b40000,0x3f800000,uVar6,1,0);
    uVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__2451144
                      (uVar6,0xffffffff,0,*(undefined8 *)puVar4);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

