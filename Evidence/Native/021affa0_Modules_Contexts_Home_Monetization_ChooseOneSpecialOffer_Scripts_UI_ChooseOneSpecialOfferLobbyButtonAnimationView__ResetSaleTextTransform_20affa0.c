/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButtonAnimationView$$ResetSaleTextTransform
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__ResetSaleTextTransform (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButtonAnimationView$$ResetSaleTextTransform
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__ResetSaleTextTransform
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__ResetSaleTextTransform_20affa0
               (long param_1)

{
  float fVar1;
  undefined *puVar2;
  float *pfVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar2 = PTR_DAT_05805c10;
  fVar1 = _UNK_04339bec;
  pfVar3 = *(float **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834
            (*pfVar3 * _UNK_04339bec,pfVar3[1] * _UNK_04339bec,pfVar3[2] * _UNK_04339bec,0);
  if (lVar4 != 0) {
    UnityEngine_Transform__set_localRotation_4092f3c(lVar4,0);
    lVar4 = *(long *)(param_1 + 0x28);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834
              (*pfVar3 * fVar1,pfVar3[1] * fVar1,pfVar3[2] * fVar1,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__set_localRotation_4092f3c(lVar4,0);
      lVar4 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
      UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                (*pfVar3 * fVar1,pfVar3[1] * fVar1,pfVar3[2] * fVar1,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__set_localRotation_4092f3c(lVar4,0);
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != 0) {
          if (pcRam0000000005c3a620 == (code *)0x0) {
            pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
          }
          (*pcRam0000000005c3a620)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

