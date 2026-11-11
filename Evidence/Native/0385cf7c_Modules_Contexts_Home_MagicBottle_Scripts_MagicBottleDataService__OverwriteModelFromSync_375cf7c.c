/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$OverwriteModelFromSync
void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__OverwriteModelFromSync (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$OverwriteModelFromSync
   void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__OverwriteModelFromSync
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, System_String_o*
   data, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__OverwriteModelFromSync_375cf7c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  
                    /* try { // try from 0385cf7c to 0395cf83 has its CatchHandler @ 0385cf90 */
  puVar2 = PTR_DAT_058031d8;
                    /* catch() { ... } // from try @ 0385cf08 with catch @ 0385cf84 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0385cf48 with catch @ 0385cf90
                       catch(type#2 @ 00000000) { ... } // from try @ 0385cf7c with catch @ 0385cf90
                        */
  if ((bRam0000000005c33ba0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d970);
    FUN_012d0dc8(PTR_DAT_057f1538);
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c33ba0 = 1;
  }
  puVar1 = PTR_DAT_057f1538;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                    (param_2,*(undefined8 *)puVar1);
  puVar8 = (undefined8 *)(param_1 + 0x20);
  *puVar8 = uVar3;
  FUN_012d0d74(puVar8,uVar3);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
  uVar3 = *puVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0576d970) {
        puVar8 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0385d064;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0576d970,0);
LAB_0385d064:
                    /* WARNING: Could not recover jumptable at 0x0385d07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
  return;
}

