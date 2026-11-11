/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.ALevel$$IsMultipleBottlePlayOn
bool Modules_Contexts_GamePlay_Levels_Scripts_ALevel__IsMultipleBottlePlayOn (Modules_Contexts_GamePlay_Levels_Scripts_ALevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.ALevel$$IsMultipleBottlePlayOn
   bool Modules_Contexts_GamePlay_Levels_Scripts_ALevel__IsMultipleBottlePlayOn
   (Modules_Contexts_GamePlay_Levels_Scripts_ALevel_o* __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_ALevel__IsMultipleBottlePlayOn_1f1708c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar2 = PTR_DAT_0576aae0;
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c29b38 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60,0);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c29b38 = 1;
  }
  lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_057d9070);
    lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
    if (((lVar8 != 0) &&
        (((lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0 &&
          (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar8,*(undefined8 *)PTR_DAT_057a1e60), lVar7 != 0)) &&
         (*(long *)(lVar7 + 0x18) != 0)))) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x18) + 0x1f0), lVar7 != 0)) {
      if (*(char *)(lVar7 + 0x10) == '\0') {
        return false;
      }
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        iVar1 = *(int *)(lVar7 + 0x14);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_022484b4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,1);
LAB_022484b4:
        iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (iVar3 < iVar1) {
          return false;
        }
        if (*(int *)(lVar7 + 0x1c) < 1) {
          return false;
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          return *(int *)(lVar7 + 0x1c) <= *(int *)(lVar4 + 0xfc);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

