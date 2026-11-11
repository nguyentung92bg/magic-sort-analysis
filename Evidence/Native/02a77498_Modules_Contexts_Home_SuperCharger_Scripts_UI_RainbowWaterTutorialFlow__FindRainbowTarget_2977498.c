/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$FindRainbowTarget
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__FindRainbowTarget (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a77838) */
/* WARNING: Removing unreachable block (ram,0x02a77778) */
/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$FindRainbowTarget
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__FindRainbowTarget
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const
   MethodInfo* method); */

void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__FindRainbowTarget_2977498
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
                    /* try { // try from 02a774b0 to 02b774d7 has its CatchHandler @ 02a7760c */
  if ((bRam0000000005c2d70a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_05770628);
    FUN_012d0dc8(PTR_DAT_057a2960);
                    /* try { // try from 02a774f0 to 02b7754f has its CatchHandler @ 02a77610 */
    FUN_012d0dc8(PTR_DAT_0580dde8);
    FUN_012d0dc8(PTR_DAT_058066c8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_057be708);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_0580e8a8);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057c19f8);
    FUN_012d0dc8(PTR_DAT_057db558);
    bRam0000000005c2d70a = 1;
  }
                    /* try { // try from 02a77564 to 02b77573 has its CatchHandler @ 02a77608 */
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
                    /* try { // try from 02a77574 to 02b775f7 has its CatchHandler @ 02a773a4 */
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  plVar12 = (long *)(param_1 + 0x20);
  *plVar12 = 0;
  FUN_012d0d74(plVar12,0);
  puVar11 = (undefined8 *)(param_1 + 0x28);
  *puVar11 = 0;
  FUN_012d0d74(puVar11,0);
  puVar7 = PTR_DAT_0580dde8;
  puVar6 = PTR_DAT_058066c8;
  puVar5 = PTR_DAT_057d0ba8;
  puVar4 = PTR_DAT_057c19f8;
  puVar3 = PTR_DAT_057b41c8;
  puVar2 = PTR_DAT_05770628;
  puVar1 = PTR_DAT_05768d80;
  if (param_2 != 0) {
    if ((*(long *)(param_2 + 0x10) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 0x10) + 0x18), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
                    /* try { // try from 02a775f8 to 02b775fb has its CatchHandler @ 02a77604 */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_d8,lVar8,*(undefined8 *)PTR_DAT_057db558);
                    /* try { // try from 02a775fc to 02b77627 has its CatchHandler @ 02a773a4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a775f8 with catch @ 02a77604
                        */
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a77564 with catch @ 02a77608
                        */
    lStack_70 = lStack_c8;
    do {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a774b0 with catch @ 02a7760c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a774f0 with catch @ 02a77610
                        */
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_80,*(undefined8 *)puVar6);
      if ((uVar9 & 1) == 0) break;
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* try { // try from 02a77628 to 02b7762b has its CatchHandler @ 02a776a4 */
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_d8,lStack_70,*(undefined8 *)puVar1);
      uStack_98 = uStack_d0;
      uStack_a0 = uStack_d8;
      lStack_90 = lStack_c8;
      do {
        uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_a0,*(undefined8 *)puVar3);
        lVar8 = lStack_90;
        if ((uVar9 & 1) == 0) {
          iVar13 = 3;
          break;
        }
        if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside_2498734
                           (lStack_90,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
                    /* try { // try from 02a77668 to 02b7768f has its CatchHandler @ 02a776b0 */
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_d8,lVar10,*(undefined8 *)puVar4);
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
        lStack_b0 = lStack_c8;
        do {
          uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_c0,*(undefined8 *)puVar7);
          lVar10 = lStack_b0;
                    /* try { // try from 02a77690 to 02b7769b has its CatchHandler @ 02a773a4 */
          if ((uVar9 & 1) == 0) {
            iVar13 = 5;
            goto LAB_02a776d8;
          }
          if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
                    /* try { // try from 02a7769c to 02b776a3 has its CatchHandler @ 02a776b0 */
        } while (*(char *)(lStack_b0 + 0x21) == '\0');
                    /* catch() { ... } // from try @ 02a77628 with catch @ 02a776a4 */
        *plVar12 = lVar8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a77668 with catch @ 02a776b0
                       catch(type#2 @ 00000000) { ... } // from try @ 02a7769c with catch @ 02a776b0
                        */
        FUN_012d0d74(plVar12,lVar8);
        *puVar11 = *(undefined8 *)(lVar10 + 0x10);
        FUN_012d0d74(puVar11);
        iVar13 = 9;
LAB_02a776d8:
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_c0,*(undefined8 *)puVar2);
      } while ((iVar13 == 5) || (iVar13 == 0));
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)puVar5);
    } while ((iVar13 == 3) || (iVar13 == 0));
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)PTR_DAT_057a2960);
  }
  return;
}

