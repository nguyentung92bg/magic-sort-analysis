/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$Dispose
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__Dispose (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$Dispose
   void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__Dispose
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__Dispose_29656d0
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  
  if ((bRam0000000005c2d66f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_057e6108);
    bRam0000000005c2d66f = 1;
  }
  puVar5 = PTR_DAT_057e6108;
  puVar4 = PTR_DAT_057d2d78;
  lVar14 = *(long *)(param_1 + 0x18);
  if (lVar14 != 0) {
    uVar8 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar8) {
      uVar15 = 0;
      do {
        if (uVar8 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar12 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        if ((lVar6 == 0) ||
           (System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)puVar5,0), lVar12 == 0
           )) goto LAB_02a657bc;
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__remove_OnSelectSuccessEvent_2ae8f84
                  (lVar12,lVar6,0);
        uVar8 = *(uint *)(lVar14 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar8);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                (*(long *)(param_1 + 0x48),0);
      lVar14 = *(long *)(param_1 + 0x30);
      if (lVar14 != 0) {
        if ((bRam0000000005c393be & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057b4bd0,0);
          bRam0000000005c393be = 1;
        }
        if (*(long *)(lVar14 + 0x78) != 0) {
          DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar14 + 0x78),0,0);
        }
        *(undefined1 *)(lVar14 + 0xb0) = 0;
        *(undefined2 *)(lVar14 + 0x74) = 0;
        if (*(long *)(lVar14 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        *(undefined4 *)(*(long *)(lVar14 + 0x60) + 0x10) = 0;
        puVar11 = (undefined8 *)(lVar14 + 0x30);
        plVar13 = (long *)*puVar11;
        if (plVar13 != (long *)0x0) {
          lVar14 = *plVar13;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057b4bd0) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar10 + 10) * 0x10 + 0x138);
                goto LAB_0410b4c8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057b4bd0,10);
LAB_0410b4c8:
          (*(code *)*puVar7)(plVar13,puVar7[1]);
        }
        *puVar11 = 0;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
LAB_02a657bc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

