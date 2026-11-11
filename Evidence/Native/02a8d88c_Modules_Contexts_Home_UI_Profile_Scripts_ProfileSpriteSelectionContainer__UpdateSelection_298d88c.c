/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$UpdateSelection
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__UpdateSelection (System_String_o* id, Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionFrame_o* sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$UpdateSelection
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__UpdateSelection
   (System_String_o* id, Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionFrame_o*
   sprite, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__UpdateSelection_298d88c
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
                    /* try { // try from 02a8d890 to 02b8d8f3 has its CatchHandler @ 02a8d7a8 */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = System_String__Equals_1ecf130(*(undefined8 *)(param_2 + 0x38),param_1,0);
  if ((uVar4 & 1) != 0) {
    if ((bRam0000000005c2eaf1 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057a5ca0,0);
      FUN_012d0dc8(PTR_DAT_05778ae0);
      FUN_012d0dc8(PTR_DAT_057c0828);
      FUN_012d0dc8(PTR_DAT_057a6c70);
      bRam0000000005c2eaf1 = 1;
    }
    puVar3 = PTR_DAT_057a6c70;
    puVar2 = PTR_DAT_057a5ca0;
    puVar1 = PTR_DAT_05778ae0;
    uStack_58 = 0;
    lStack_50 = 0;
    uStack_60 = 0;
    if (*(long *)(param_2 + 0x28) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_057a6c70);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_GameObject__SetActive_408e318(lStack_50,1,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_60,*(undefined8 *)puVar2);
      if (*(long *)(param_2 + 0x30) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_78,*(long *)(param_2 + 0x30),*(undefined8 *)puVar3);
        uStack_58 = uStack_70;
        uStack_60 = uStack_78;
        lStack_50 = lStack_68;
        while( true ) {
          uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_60,*(undefined8 *)puVar1);
          if ((uVar4 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_60,*(undefined8 *)puVar2);
            return;
          }
          if (lStack_50 == 0) break;
          UnityEngine_GameObject__SetActive_408e318(lStack_50,0,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2eaf2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0,0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    bRam0000000005c2eaf2 = 1;
  }
  puVar3 = PTR_DAT_057a6c70;
  puVar2 = PTR_DAT_057a5ca0;
  puVar1 = PTR_DAT_05778ae0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_057a6c70);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lStack_50,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar2);
    if (*(long *)(param_2 + 0x30) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_2 + 0x30),*(undefined8 *)puVar3);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while( true ) {
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_60,*(undefined8 *)puVar1);
        if ((uVar4 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_60,*(undefined8 *)puVar2);
          return;
        }
        if (lStack_50 == 0) break;
        UnityEngine_GameObject__SetActive_408e318(lStack_50,1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

