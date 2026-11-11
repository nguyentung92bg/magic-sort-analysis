/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.SuperChargerConfigModel$$IsValid
bool Modules_Contexts_GamePlay_SuperCharger_SuperChargerConfigModel__IsValid (Modules_Contexts_GamePlay_SuperCharger_SuperChargerConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.SuperChargerConfigModel$$IsValid
   bool Modules_Contexts_GamePlay_SuperCharger_SuperChargerConfigModel__IsValid
   (Modules_Contexts_GamePlay_SuperCharger_SuperChargerConfigModel_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_SuperCharger_SuperChargerConfigModel__IsValid_1617664(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000005c244a0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057df210);
    FUN_012d0dc8(PTR_DAT_057c3c28);
    bRam0000000005c244a0 = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == 0)) {
    uVar1 = 0;
  }
  else if ((*(long *)(param_1 + 0x38) == 0) ||
          (uVar1 = System_Collections_Generic_Dictionary_int__int___get_Count_396d45c
                             (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057df210),
          (int)uVar1 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

