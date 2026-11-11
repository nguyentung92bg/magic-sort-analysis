/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.ChargeableBottleTutorialFlow$$FindChargeableBottleItem
Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a76340) */
/* WARNING: Removing unreachable block (ram,0x02a76278) */
/* IL2CPP:
   Modules.Contexts.Home.SuperCharger.Scripts.UI.ChargeableBottleTutorialFlow$$FindChargeableBottleItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o*
   Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const
   MethodInfo* method); */

long * Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem_2975fb4
                 (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000005c2d6fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8328);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a2960);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_058066c8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_057be708);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057db558);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2d6fe = 1;
  }
  puVar9 = PTR_DAT_058066c8;
  puVar8 = PTR_DAT_057d8328;
  puVar7 = PTR_DAT_057d0ba8;
  puVar6 = PTR_DAT_057b7918;
  puVar5 = PTR_DAT_057b41c8;
  puVar4 = PTR_DAT_057a7f80;
  puVar3 = PTR_DAT_05768d80;
  puVar2 = PTR_DAT_057605b8;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_c0 = 0;
  if (param_1 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_d8,lVar10,*(undefined8 *)PTR_DAT_057db558);
    plVar13 = (long *)0x0;
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
    plStack_70 = plStack_c8;
    do {
      uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                         (&uStack_80,*(undefined8 *)puVar9);
      if ((uVar11 & 1) == 0) {
        iVar12 = 10;
        break;
      }
      if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_d8,plStack_70,*(undefined8 *)puVar3);
      uStack_98 = uStack_d0;
      uStack_a0 = uStack_d8;
      plStack_90 = plStack_c8;
      do {
        uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_a0,*(undefined8 *)puVar5);
        if ((uVar11 & 1) == 0) {
          iVar12 = 3;
          break;
        }
        if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (plStack_90[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_d8,plStack_90[0x11],*(undefined8 *)puVar6);
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
        plStack_b0 = plStack_c8;
        do {
          do {
            uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_c0,*(undefined8 *)puVar4);
            if ((uVar11 & 1) == 0) {
              iVar12 = 5;
              goto LAB_02a761e4;
            }
          } while (plStack_b0 == (long *)0x0);
          bVar1 = *(byte *)(*(long *)puVar8 + 300);
        } while ((*(byte *)(*plStack_b0 + 300) < bVar1) ||
                (*(long *)(*(long *)(*plStack_b0 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)
                );
        iVar12 = 9;
        plVar13 = plStack_b0;
LAB_02a761e4:
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_c0,*(undefined8 *)puVar2);
      } while ((iVar12 == 5) || (iVar12 == 0));
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)puVar7);
    } while ((iVar12 == 3) || (iVar12 == 0));
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)PTR_DAT_057a2960);
    if (iVar12 != 9) {
      plVar13 = (long *)0x0;
    }
  }
  return plVar13;
}

