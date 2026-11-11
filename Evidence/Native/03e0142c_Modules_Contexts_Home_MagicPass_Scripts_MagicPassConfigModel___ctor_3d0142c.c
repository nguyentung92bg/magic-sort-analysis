/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.MagicPassConfigModel$$.ctor
void Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel___ctor (Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.MagicPassConfigModel$$.ctor
   void Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel___ctor
   (Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel___ctor_3d0142c(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_0576e358;
  if ((bRam0000000005c371d8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f5fa8);
    FUN_012d0dc8(PTR_DAT_0575d9f8);
    FUN_012d0dc8(PTR_DAT_05766d80);
    FUN_012d0dc8(PTR_DAT_0576e358);
    bRam0000000005c371d8 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0575d9f8;
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_05766d80);
    *(long *)(param_1 + 0x30) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x30),lVar2);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                (lVar2,*(undefined8 *)PTR_DAT_057f5fa8);
      *(long *)(param_1 + 0x50) = lVar2;
      FUN_012d0d74((long *)(param_1 + 0x50),lVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_1;
      return auVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

