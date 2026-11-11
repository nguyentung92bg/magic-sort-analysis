/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$ShowLevelFailedBanner
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowLevelFailedBanner (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$ShowLevelFailedBanner
   void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowLevelFailedBanner
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowLevelFailedBanner_16f4804
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((bRam0000000005c24b71 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057666e0);
    bRam0000000005c24b71 = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x18), lVar5 != 0)) {
    UnityEngine_SpriteRenderer__set_color_4095de0(0,0,0,0,lVar5,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x18), lVar5 != 0)) {
      UnityEngine_SpriteRenderer__set_color_4095de0(0,0,0,0,lVar5,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),0,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),1,0);
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
             lVar5 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
            if (*(long *)(param_1 + 0x28) != 0) {
              Modules_Infrastructure_UI_Common_Scripts_AnimationController__PlayAnimatorAnimation_4002524
                        (*(long *)(param_1 + 0x28),0);
              puVar4 = PTR_DAT_0578b048;
              if (*(long *)(param_1 + 0x28) != 0) {
                plVar7 = (long *)(*(long *)(param_1 + 0x28) + 0x18);
                lVar8 = *plVar7;
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
                if (lVar5 != 0) {
                  System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057666e0,0);
                  plVar6 = (long *)System_Delegate__Combine_23e3964(lVar8,lVar5,0);
                  if (plVar6 == (long *)0x0) {
                    *plVar7 = 0;
                  }
                  else {
                    lVar5 = *(long *)puVar4;
                    if ((*plVar6 != lVar5) || (*plVar7 = (long)plVar6, *plVar6 != lVar5)) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d1288(plVar6);
                    }
                  }
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

