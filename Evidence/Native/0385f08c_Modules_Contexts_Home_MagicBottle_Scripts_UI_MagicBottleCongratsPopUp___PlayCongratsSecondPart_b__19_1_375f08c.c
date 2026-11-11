/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$<PlayCongratsSecondPart>b__19_1
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp___PlayCongratsSecondPart_b__19_1 (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$<PlayCongratsSecondPart>b__19_1
   void 
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp___PlayCongratsSecondPart_b__19_1
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp___PlayCongratsSecondPart_b__19_1_375f08c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  lVar5 = *(long *)(param_1 + 0x70);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2d74c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0,0);
    bRam0000000005c2d74c = 1;
  }
  Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__StopMagicBottleParticle_297eb8c
            (lVar5);
  if ((*(long *)(lVar5 + 0x90) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x90),0), lVar3 != 0))
  {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    if (*(long *)(lVar5 + 0x90) != 0) {
      lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar5 + 0x90),0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar1 = PTR_DAT_05805c10;
      if (lVar3 != 0) {
        puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0(*puVar6,puVar6[1],puVar6[2],lVar3,0);
        if (*(long *)(lVar5 + 0x98) != 0) {
          UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(lVar5 + 0x98),0);
          if (*(long *)(lVar5 + 0xa0) != 0) {
            UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(lVar5 + 0xa0),0);
            if (*(long *)(lVar5 + 0x90) != 0) {
              uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar5 + 0x90),0);
              if (cRam0000000005c230a9 == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230a9 = '\x01';
              }
              if (*(long *)(lVar5 + 0x20) != 0) {
                lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
                lVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                  (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                                   *(undefined4 *)(lVar3 + 0x14),
                                   *(undefined4 *)(*(long *)(lVar5 + 0x20) + 0x18),uVar4,0);
                if (*(long *)(lVar5 + 0x20) != 0) {
                  uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x20);
                  if ((bRam0000000005c2b025 & 1) == 0) {
                    FUN_012d0dc8(PTR_DAT_05805638,uVar4,*(undefined8 *)PTR_DAT_057874c0);
                    FUN_012d0dc8(PTR_DAT_05776a80);
                    FUN_012d0dc8(PTR_DAT_0580b108);
                    bRam0000000005c2b025 = 1;
                  }
                  puVar1 = PTR_DAT_05776a80;
                  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
                    *(undefined4 *)(lVar3 + 0xb4) = 0x25;
                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    puVar1 = PTR_DAT_0580b108;
                    if (lVar5 != 0) {
                      DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar5,uVar4,0);
                      lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      if (lVar2 != 0) {
                        DG_Tweening_EaseFunction___ctor_1ed6eb4
                                  (lVar2,lVar5,*(undefined8 *)PTR_DAT_05805638,0);
                        *(long *)(lVar3 + 0xb8) = lVar2;
                        FUN_012d0d74((long *)(lVar3 + 0xb8),lVar2);
                        return lVar3;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  return lVar3;
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

