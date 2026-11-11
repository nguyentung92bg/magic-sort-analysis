/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$SerializeModelForSync
System_String_o* Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__SerializeModelForSync (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$SerializeModelForSync
   System_String_o*
   Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__SerializeModelForSync
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__SerializeModelForSync_375ce90
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c33b9e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d970);
    bRam0000000005c33b9e = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
                    /* try { // try from 0385ced8 to 0395cedb has its CatchHandler @ 0385cee4 */
                    /* try { // try from 0385cedc to 0395cf07 has its CatchHandler @ 0385cabc */
  if (uVar3 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385ced8 with catch @ 0385cee4
                        */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385ce50 with catch @ 0385cee8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385cd9c with catch @ 0385ceec
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385cddc with catch @ 0385cef0
                        */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0576d970) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_0385cf20;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 0385cf08 to 0395cf0b has its CatchHandler @ 0385cf84 */
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0576d970,2);
LAB_0385cf20:
                    /* WARNING: Could not recover jumptable at 0x0385cf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}

