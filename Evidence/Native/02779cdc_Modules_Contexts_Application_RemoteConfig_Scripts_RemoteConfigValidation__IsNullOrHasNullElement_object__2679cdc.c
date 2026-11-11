/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.RemoteConfigValidation$$IsNullOrHasNullElement<object>
bool Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object_ (System_Collections_Generic_IEnumerable_T__o* source, const MethodInfo_2679CDC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02779f20) */
/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.RemoteConfigValidation$$IsNullOrHasNullElement<object>
   bool 
   Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object_
   (System_Collections_Generic_IEnumerable_T__o* source, const MethodInfo_2679CDC* method); */

byte Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
               (long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  if ((bRam0000000005c2bdbb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2bdbb = 1;
  }
  if (param_1 == (long *)0x0) {
    bVar3 = 1;
  }
  else {
    lVar6 = **(long **)(param_2 + 0x38);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_0131942c(lVar6);
    }
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02779d8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(param_1,lVar6,0);
LAB_02779d8c:
    puVar2 = PTR_DAT_058165e8;
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    puVar1 = PTR_DAT_057a12b8;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    do {
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02779dfc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,0);
LAB_02779dfc:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        bVar3 = 0;
        iVar11 = 6;
        iVar10 = 6;
        goto joined_r0x02779ea0;
      }
      lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_0131942c(lVar6);
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02779e70;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar5,lVar6,0);
LAB_02779e70:
      lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    } while (lVar6 != 0);
    bVar3 = 1;
    iVar11 = 5;
    iVar10 = 5;
joined_r0x02779ea0:
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02779ef0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_02779ef0:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      iVar10 = iVar11;
    }
    bVar3 = iVar10 == 5 & bVar3;
  }
  return bVar3;
}

