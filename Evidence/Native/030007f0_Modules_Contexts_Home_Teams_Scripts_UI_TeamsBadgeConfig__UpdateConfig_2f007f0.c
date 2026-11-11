/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamsBadgeConfig$$UpdateConfig
void Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__UpdateConfig (Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamsBadgeConfig$$UpdateConfig
   void Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__UpdateConfig
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__UpdateConfig_2f007f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam0000000005c305c0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ea388);
    FUN_012d0dc8(PTR_DAT_057f1998);
    bRam0000000005c305c0 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_012d0e38(*(undefined8 *)PTR_DAT_057ea388,
                         *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
    puVar5 = (undefined8 *)(param_1 + 0x18);
    *puVar5 = uVar2;
    FUN_012d0d74(puVar5,uVar2);
    puVar1 = PTR_DAT_057f1998;
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      lVar6 = 4;
      lVar7 = 0x20;
      do {
        if ((long)*(int *)(lVar3 + 0x18) <= lVar6 + -4) {
          return;
        }
        plVar8 = (long *)*puVar5;
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 == 0) break;
        System_Object___ctor_23dfe5c(lVar3,0);
        *(int *)(lVar3 + 0x10) = (int)lVar6 + -3;
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) break;
        if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar6 - 4U) {
LAB_03000938:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar4 + lVar6 * 8);
        FUN_012d0d74();
        if (plVar8 == (long *)0x0) break;
        lVar4 = thunk_FUN_01320d5c(lVar3,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar4 == 0) {
          uVar2 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar2,0);
        }
        if ((ulong)*(uint *)(plVar8 + 3) <= lVar6 - 4U) goto LAB_03000938;
        plVar8[lVar6] = lVar3;
        FUN_012d0d74((long)plVar8 + lVar7,lVar3);
        lVar3 = *(long *)(param_1 + 0x20);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

