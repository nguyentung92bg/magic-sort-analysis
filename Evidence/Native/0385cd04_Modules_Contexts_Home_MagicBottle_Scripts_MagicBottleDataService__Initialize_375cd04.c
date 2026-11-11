/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$Initialize
void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__Initialize (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$Initialize
   void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__Initialize
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__Initialize_375cd04
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000005c33b9c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d970);
    bRam0000000005c33b9c = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0576d970) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_0385cd90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0576d970,1);
LAB_0385cd90:
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
                    /* try { // try from 0385cd9c to 0395cdc3 has its CatchHandler @ 0385ceec */
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),uVar2);
  *(undefined2 *)(param_1 + 0x18) = 0x100;
  return;
}

