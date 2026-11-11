/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$Initialize
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__Initialize_2aea4d4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c2eb72 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05794398);
    FUN_012d0dc8(PTR_DAT_05795380);
    FUN_012d0dc8(PTR_DAT_057d76b8);
    FUN_012d0dc8(PTR_DAT_057c9aa0);
    bRam0000000005c2eb72 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = 0;
  puVar1 = PTR_DAT_057c9aa0;
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_05794398) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02bea590;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_05794398,1);
LAB_02bea590:
    lVar7 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    plVar10 = (long *)(param_1 + 0x10);
    *plVar10 = lVar7;
    FUN_012d0d74(plVar10,lVar7);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar7 != 0) {
      Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object____ctor_30ea8d0
                (lVar7,1000,*(undefined8 *)PTR_DAT_057d76b8);
      *(long *)(param_1 + 0x28) = lVar7;
      FUN_012d0d74((long *)(param_1 + 0x28),lVar7);
      if (*(long *)(param_1 + 0x10) != 0) {
        return;
      }
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05795380);
      if (lVar7 != 0) {
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardModel___ctor_2aea3ec();
        *plVar10 = lVar7;
        FUN_012d0d74(plVar10,lVar7);
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        puVar1 = PTR_DAT_057c8a60;
        lVar7 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
        if (lVar7 != 0) {
          if ((bRam0000000005c2386a & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0575f9f0,0);
            FUN_012d0dc8(PTR_DAT_057c8a60);
            FUN_012d0dc8(PTR_DAT_05791760);
            bRam0000000005c2386a = 1;
          }
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0575f9f0;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar4,*(undefined8 *)PTR_DAT_05791760,0);
          uVar5 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__LeaderboardFaulted_2dbc210(0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar5,0);
          if ((bRam0000000005c2373b & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057f8670);
            FUN_012d0dc8(PTR_DAT_0576fba0);
            FUN_012d0dc8(PTR_DAT_057fde78);
            FUN_012d0dc8(PTR_DAT_0577a090);
            FUN_012d0dc8(PTR_DAT_0581bc50);
            bRam0000000005c2373b = 1;
          }
          puVar3 = PTR_DAT_057f8670;
          puVar2 = PTR_DAT_0577a090;
          puVar1 = PTR_DAT_0576fba0;
          uStack_40 = 0;
          plStack_38 = (long *)0x0;
          uStack_48 = 0;
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_48,lVar7,*(undefined8 *)PTR_DAT_0581bc50);
          do {
            uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_48,*(undefined8 *)puVar1);
            plVar10 = plStack_38;
            if ((uVar8 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_48,*(undefined8 *)puVar3);
              return;
            }
            if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar7 = *plStack_38;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_01547ebc;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0131971c(plStack_38,*(long *)puVar2,0);
LAB_01547ebc:
            (*(code *)*puVar6)(plVar10,lVar4,puVar6[1]);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

