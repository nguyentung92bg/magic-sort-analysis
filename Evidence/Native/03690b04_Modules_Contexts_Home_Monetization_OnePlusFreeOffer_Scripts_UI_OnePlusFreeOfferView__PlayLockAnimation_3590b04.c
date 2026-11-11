/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$PlayLockAnimation
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__PlayLockAnimation (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$PlayLockAnimation
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__PlayLockAnimation
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this,
   const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__PlayLockAnimation_3590b04
                (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_057598d8;
  if ((bRam0000000005c32e30 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577fe10);
    FUN_012d0dc8(PTR_DAT_05804920);
    FUN_012d0dc8(PTR_DAT_057e1e68);
    FUN_012d0dc8(PTR_DAT_057598d8);
    bRam0000000005c32e30 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576c200;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Equality_407f288(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      return uVar4;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    DG_Tweening_DOTween__Kill_1eda9a4(uVar9,0,0);
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x40),0);
      plVar10 = (long *)(lVar3 + 0x10);
      *plVar10 = lVar5;
      FUN_012d0d74(plVar10,lVar5);
      if (*plVar10 != 0) {
        lVar5 = UnityEngine_Component__get_transform_408b444(*plVar10,0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        puVar2 = PTR_DAT_05805c10;
        puVar1 = PTR_DAT_057606c8;
        if (lVar5 != 0) {
          puVar7 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localEulerAngles_4092f0c(*puVar7,puVar7[1],puVar7[2],lVar5,0);
          lVar5 = *plVar10;
          if (cRam0000000005c24e32 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c24e32 = '\x01';
          }
          lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
          uVar9 = DG_Tweening_ShortcutExtensions__DOPunchRotation_1ee7424
                            (*(float *)(lVar8 + 0x48) * 30.0,*(float *)(lVar8 + 0x4c) * 30.0,
                             *(float *)(lVar8 + 0x50) * 30.0,_DAT_04321768,0x3f800000,lVar5,10,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_05804920;
          puVar1 = PTR_DAT_0577fe10;
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_057e1e68,0);
            uVar4 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                              (uVar9,lVar5,*(undefined8 *)puVar1);
            uVar9 = *(undefined8 *)(param_1 + 0x40);
            uVar6 = *(undefined8 *)puVar2;
            if ((uVar4 != 0) && (*(char *)(uVar4 + 0xe8) != '\0')) {
              *(undefined8 *)(uVar4 + 0x30) = uVar9;
              FUN_012d0d74((undefined8 *)(uVar4 + 0x30),uVar9,uVar6);
            }
            return uVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

