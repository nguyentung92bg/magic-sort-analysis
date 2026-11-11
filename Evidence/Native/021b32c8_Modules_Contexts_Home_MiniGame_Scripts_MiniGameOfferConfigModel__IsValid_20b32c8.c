/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameOfferConfigModel$$IsValid
bool Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferConfigModel__IsValid (Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameOfferConfigModel$$IsValid
   bool Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferConfigModel__IsValid
   (Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferConfigModel_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferConfigModel__IsValid_20b32c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000005c2953d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057650c8);
    FUN_012d0dc8(PTR_DAT_0579f6b0);
    FUN_012d0dc8(PTR_DAT_05760168);
    FUN_012d0dc8(PTR_DAT_057d7440);
    FUN_012d0dc8(PTR_DAT_0577d9e0);
    bRam0000000005c2953d = 1;
  }
  puVar2 = PTR_DAT_0579f6b0;
  puVar1 = PTR_DAT_05760168;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  bVar3 = false;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      bVar3 = false;
    }
    else {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                (&uStack_50,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057650c8);
      do {
        uVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                          (&uStack_50,*(undefined8 *)puVar1);
        if ((uVar4 & 1) == 0) {
          iVar5 = 7;
          goto LAB_021b3394;
        }
      } while (lStack_38 != 0);
      iVar5 = 6;
LAB_021b3394:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                (&uStack_50,*(undefined8 *)puVar2);
      bVar3 = iVar5 != 6;
    }
  }
  return bVar3;
}

