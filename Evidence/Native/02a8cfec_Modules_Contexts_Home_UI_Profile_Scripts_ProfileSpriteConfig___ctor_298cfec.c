/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteConfig$$.ctor
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig___ctor (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteConfig$$.ctor
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig___ctor
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig___ctor_298cfec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_0577bf58;
  if ((bRam0000000005c2d7dc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057978b8);
    FUN_012d0dc8(PTR_DAT_05766950);
    FUN_012d0dc8(PTR_DAT_0578cff0);
    FUN_012d0dc8(PTR_DAT_05818128);
    FUN_012d0dc8(PTR_DAT_0577bf58);
    FUN_012d0dc8(PTR_DAT_05778c18);
    FUN_012d0dc8(PTR_DAT_057b0d78);
    bRam0000000005c2d7dc = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057b0d78;
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_057978b8);
    *(long *)(param_1 + 0x18) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x18),lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      System_Object___ctor_23dfe5c(lVar3,0);
      *(long *)(param_1 + 0x20) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x20),lVar3);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar3 != 0) {
        System_Object___ctor_23dfe5c(lVar3,0);
        *(long *)(param_1 + 0x28) = lVar3;
        FUN_012d0d74((long *)(param_1 + 0x28),lVar3);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_05818128;
        if (lVar3 != 0) {
          System_Object___ctor_23dfe5c(lVar3,0);
          *(long *)(param_1 + 0x30) = lVar3;
          FUN_012d0d74((long *)(param_1 + 0x30),lVar3);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_05778c18;
          if (lVar3 != 0) {
            System_Collections_Generic_List_object____ctor_21fc1fc
                      (lVar3,*(undefined8 *)PTR_DAT_0578cff0);
            *(long *)(param_1 + 0x38) = lVar3;
            FUN_012d0d74((long *)(param_1 + 0x38),lVar3);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar1 = PTR_DAT_05766950;
            if (lVar3 != 0) {
              System_Collections_Generic_List_object____ctor_21fc1fc
                        (lVar3,*(undefined8 *)PTR_DAT_05766950);
              *(long *)(param_1 + 0x40) = lVar3;
              FUN_012d0d74((long *)(param_1 + 0x40),lVar3);
              lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if (lVar3 != 0) {
                System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar1);
                *(long *)(param_1 + 0x48) = lVar3;
                FUN_012d0d74((long *)(param_1 + 0x48),lVar3);
                puVar2 = PTR_DAT_0576c200;
                if ((bRam0000000005c3a3d4 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_0576c200,0);
                  bRam0000000005c3a3d4 = 1;
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                System_Object___ctor_23dfe5c(param_1,0);
                if (pcRam0000000005c3a3d8 == (code *)0x0) {
                  pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
                }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000005c3a3d8)(param_1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

