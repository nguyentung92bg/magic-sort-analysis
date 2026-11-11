/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopPromptResultEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopPromptResultEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t result, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopPromptResultEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopPromptResultEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t result,
   System_String_o* productId, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopPromptResultEvent_1494d78
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  byte abStack_84 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23884 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ae9f8);
    FUN_012d0dc8(PTR_DAT_057c2350);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057a4c48);
    FUN_012d0dc8(PTR_DAT_0578d930);
    FUN_012d0dc8(PTR_DAT_0578ecd8);
    FUN_012d0dc8(PTR_DAT_057d4c78);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23884 = 1;
  }
  lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
    plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
    lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar14 != 0) &&
       ((lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0 &&
        (lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar14,*(undefined8 *)PTR_DAT_057f83f8), puVar2 = PTR_DAT_057d4c78,
        puVar1 = PTR_DAT_057c8a60, lVar14 != 0)))) {
      bVar9 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__CanShowWebShopOffer_31616d8
                        (lVar14,param_3,0);
      uVar18 = *(undefined8 *)puVar2;
      lVar14 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebShopProduct_31617a4
                         (lVar14,param_3,0);
      if (lVar14 != 0) {
        uVar18 = *(undefined8 *)(lVar14 + 0x18);
      }
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar14 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar14,*(undefined8 *)PTR_DAT_057c2350,0);
        puVar8 = PTR_DAT_05800b30;
        puVar7 = PTR_DAT_057db748;
        puVar6 = PTR_DAT_057caaf0;
        puVar5 = PTR_DAT_057b4910;
        puVar4 = PTR_DAT_057a4c48;
        puVar3 = PTR_DAT_0578ecd8;
        puVar2 = PTR_DAT_0578d930;
        puVar1 = PTR_DAT_057636d0;
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_01594fe0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01594fe0:
          uStack_64 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar6,uVar13,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar8,param_3,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar2,uVar18,0);
          puVar2 = PTR_DAT_057ae9f8;
          uStack_80 = *(undefined8 *)PTR_DAT_057ae9f8;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = param_2;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_80,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar4,uVar13,0);
          abStack_84[0] = bVar9 & 1;
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,abStack_84);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar3,uVar13,0);
          lVar15 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_015950fc;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_015950fc:
          iVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          uStack_a0 = *(undefined8 *)puVar2;
          uStack_98 = 0xffffffffffffffff;
          uStack_90 = param_2;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_a0,0);
          uVar18 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopOfferPromptResult_2dbaeb4
                             ((long)iVar10,param_3,uVar18,uVar13,bVar9 & 1,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar18,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar14)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

