/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$IsLobbyShown
bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsLobbyShown (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$IsLobbyShown
   bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsLobbyShown
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsLobbyShown_375d7fc
               (long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000005c33ba2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c33ba2 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0385d3e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_0385d3e4:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    lVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                      (param_1);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        bVar1 = false;
      }
      else {
        lVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                          (param_1);
        if (lVar4 == 0) goto LAB_0385d434;
        bVar1 = *(int *)(lVar4 + 0x14) <= iVar2;
      }
      return bVar1;
    }
  }
LAB_0385d434:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

