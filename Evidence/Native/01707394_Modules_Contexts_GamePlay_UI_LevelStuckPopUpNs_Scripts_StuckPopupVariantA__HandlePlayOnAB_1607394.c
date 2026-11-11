/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$HandlePlayOnAB
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__HandlePlayOnAB (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$HandlePlayOnAB
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__HandlePlayOnAB
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__HandlePlayOnAB_1607394
               (long param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c243fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05769838);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c243fa = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_05769838), lVar3 != 0)) {
    cVar1 = *(char *)(lVar3 + 0x54);
    *(char *)(param_1 + 0xf8) = cVar1;
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0),
       lVar3 != 0)) {
      if (cVar1 == '\0') {
        UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
        if ((*(long *)(param_1 + 0x80) != 0) &&
           (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x80),0),
           lVar3 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
          if ((*(long *)(param_1 + 0x78) != 0) &&
             (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
             lVar3 != 0)) {
            uVar4 = 1;
            goto LAB_017074ac;
          }
        }
      }
      else {
        UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
        if ((*(long *)(param_1 + 0x80) != 0) &&
           (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x80),0),
           lVar3 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
          if ((*(long *)(param_1 + 0x78) != 0) &&
             (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
             lVar3 != 0)) {
            uVar4 = 0;
LAB_017074ac:
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar3,uVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

