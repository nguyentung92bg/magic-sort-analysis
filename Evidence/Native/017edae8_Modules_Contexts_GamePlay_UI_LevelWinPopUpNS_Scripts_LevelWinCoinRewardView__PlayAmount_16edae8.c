/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinCoinRewardView$$PlayAmount
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__PlayAmount (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView_o* __this, int32_t oldAmount, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinCoinRewardView$$PlayAmount
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__PlayAmount
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView_o* __this, int32_t
   oldAmount, int32_t amount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__PlayAmount_16edae8
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_057b18c0;
  if ((bRam0000000005c24b3c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576bb68);
    FUN_012d0dc8(PTR_DAT_057f6da0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0579ab78);
    FUN_012d0dc8(PTR_DAT_05790098);
    FUN_012d0dc8(PTR_DAT_057b18c0);
    bRam0000000005c24b3c = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_0576bb68;
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x18) = param_1;
    *(undefined4 *)(lVar5 + 0x10) = param_2;
    FUN_012d0d74((long *)(lVar5 + 0x18),param_1);
    plVar8 = (long *)(param_1 + 0x28);
    if (*plVar8 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar8,0,0);
    }
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_057f6da0;
    if (lVar6 != 0) {
      DG_Tweening_Core_DOGetter_int____ctor_156cd70(lVar6,lVar5,*(undefined8 *)PTR_DAT_0579ab78,0);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_057815e0;
      if (lVar7 != 0) {
        DG_Tweening_Core_DOSetter_int____ctor_156deb0(lVar7,lVar5,*(undefined8 *)PTR_DAT_05790098,0)
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = DG_Tweening_DOTween__To_1ed85d4(_DAT_04321768,lVar6,lVar7,param_3,0);
        *plVar8 = lVar5;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

