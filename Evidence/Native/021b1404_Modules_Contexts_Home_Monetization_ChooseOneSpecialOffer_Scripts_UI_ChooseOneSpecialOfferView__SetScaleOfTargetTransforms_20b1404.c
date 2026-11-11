/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$SetScaleOfTargetTransforms
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__SetScaleOfTargetTransforms (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o* __this, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$SetScaleOfTargetTransforms
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__SetScaleOfTargetTransforms
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o*
   __this, float scale, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__SetScaleOfTargetTransforms_20b1404
               (float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2952d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae688);
    FUN_012d0dc8(PTR_DAT_0575a3c0);
    FUN_012d0dc8(PTR_DAT_057e60f0);
    FUN_012d0dc8(PTR_DAT_057651f0);
    bRam0000000005c2952d = 1;
  }
  puVar3 = PTR_DAT_057ae688;
  puVar2 = PTR_DAT_057651f0;
  puVar1 = PTR_DAT_0575a3c0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (*(long *)(param_2 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,*(long *)(param_2 + 0x38),*(undefined8 *)PTR_DAT_057651f0);
    puVar4 = PTR_DAT_05805c10;
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar1);
      lVar5 = lStack_60;
      if ((uVar6 & 1) == 0) break;
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(puVar4);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(float *)(lVar7 + 0xc) * param_1,*(float *)(lVar7 + 0x10) * param_1,
                 *(float *)(lVar7 + 0x14) * param_1,lVar5,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar3);
    if (*(long *)(param_2 + 0x40) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_88,*(long *)(param_2 + 0x40),*(undefined8 *)puVar2);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      lStack_60 = lStack_78;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_70,*(undefined8 *)puVar1), lVar5 = lStack_60,
            (uVar6 & 1) != 0) {
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(puVar4);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(float *)(lVar7 + 0xc) * param_1,*(float *)(lVar7 + 0x10) * param_1,
                   *(float *)(lVar7 + 0x14) * param_1,lVar5,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar3);
      if (*(long *)(param_2 + 0x48) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_88,*(long *)(param_2 + 0x48),*(undefined8 *)puVar2);
        uStack_68 = uStack_80;
        uStack_70 = uStack_88;
        lStack_60 = lStack_78;
        while( true ) {
          uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_70,*(undefined8 *)puVar1);
          lVar5 = lStack_60;
          if ((uVar6 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_70,*(undefined8 *)puVar3);
            return;
          }
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(puVar4);
            cRam0000000005c230a9 = '\x01';
          }
          if (lVar5 == 0) break;
          lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(float *)(lVar7 + 0xc) * param_1,*(float *)(lVar7 + 0x10) * param_1,
                     *(float *)(lVar7 + 0x14) * param_1,lVar5,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

