/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$ShowIntroduce
void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__ShowIntroduce (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$ShowIntroduce
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__ShowIntroduce
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__ShowIntroduce_3e210a0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  lVar7 = *(long *)(param_4 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar7 + 0x38) != 0) {
    lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar7 + 0x38),0);
    if (lVar6 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
      lVar7 = *(long *)(lVar7 + 0x38);
      if ((lVar7 != 0) &&
         (lVar6 = UnityEngine_Component__get_transform_408b444(lVar7,0), lVar6 != 0)) {
        fVar9 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
        if ((bRam0000000005c24456 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05770998,0);
          bRam0000000005c24456 = 1;
        }
        plVar8 = (long *)(lVar7 + 0x18);
        if (*plVar8 != 0) {
          DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar8,0,0);
        }
        lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar7,0);
        if (lVar6 != 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
          lVar6 = UnityEngine_Component__get_transform_408b444(lVar7,0);
          if (lVar6 != 0) {
            UnityEngine_Transform__set_position_4092ba8
                      (fVar9 + *(float *)(lVar7 + 0x20),param_2 + *(float *)(lVar7 + 0x24),
                       param_3 + *(float *)(lVar7 + 0x28),lVar6,0);
            lVar6 = UnityEngine_Component__get_transform_408b444(lVar7,0);
            puVar4 = PTR_DAT_05770998;
            if (lVar6 != 0) {
              UnityEngine_Transform__set_localScale_40932d0
                        (0x3e800000,0x3e800000,0x3e800000,lVar6,0);
              uVar5 = UnityEngine_Component__get_transform_408b444(lVar7,0);
              uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                (_UNK_04339be8,_UNK_04339be8,0x3f800000,_UNK_04321764,uVar5,0);
              uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                (uVar5,0x1b,*(undefined8 *)puVar4);
              *(undefined8 *)(lVar7 + 0x18) = uVar5;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

