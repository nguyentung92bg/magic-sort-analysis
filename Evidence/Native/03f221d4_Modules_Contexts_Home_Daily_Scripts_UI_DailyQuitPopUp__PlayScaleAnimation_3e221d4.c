/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$PlayScaleAnimation
void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__PlayScaleAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$PlayScaleAnimation
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__PlayScaleAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__PlayScaleAnimation_3e221d4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000005c3811b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c3811b = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0), lVar4 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    lVar4 = *(long *)(param_1 + 0x30);
    if ((lVar4 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar4 + 0x160),*(undefined4 *)(lVar4 + 0x164),
                 *(undefined4 *)(lVar4 + 0x168),*(long *)(param_1 + 0x18),0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
         lVar4 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x158), lVar4 != 0)) {
          uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                            (0x3f800000,*(undefined4 *)(lVar4 + 0x10),
                             *(undefined8 *)(param_1 + 0x18),0);
          if (*(long *)(param_1 + 0x30) != 0) {
            uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),
                               *(undefined8 *)PTR_DAT_057874c0);
            puVar6 = (undefined8 *)(param_1 + 0x40);
            *puVar6 = uVar5;
            if (iRam0000000005c3d478 != 0) {
              puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

