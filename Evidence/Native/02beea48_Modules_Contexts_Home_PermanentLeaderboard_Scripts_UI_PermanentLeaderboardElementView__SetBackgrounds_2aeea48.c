/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardElementView$$SetBackgrounds
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__SetBackgrounds (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView_o* __this, bool isUser, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardElementView$$SetBackgrounds
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__SetBackgrounds
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView_o* __this,
   bool isUser, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__SetBackgrounds_2aeea48
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((param_2 & 1) == 0) {
    if ((bRam0000000005c2eb97 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057a5ca0);
      FUN_012d0dc8(PTR_DAT_05778ae0);
      FUN_012d0dc8(PTR_DAT_057c0828);
      FUN_012d0dc8(PTR_DAT_057a6c70);
      bRam0000000005c2eb97 = 1;
    }
    puVar3 = PTR_DAT_057a6c70;
    puVar2 = PTR_DAT_057a5ca0;
    puVar1 = PTR_DAT_05778ae0;
    uStack_58 = 0;
    lStack_50 = 0;
    uStack_60 = 0;
    if (*(long *)(param_1 + 0x68) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_057a6c70);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar5 = UnityEngine_GameObject__get_gameObject_408e764(lStack_50,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_60,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x70) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_78,*(long *)(param_1 + 0x70),*(undefined8 *)puVar3);
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
          lVar5 = UnityEngine_GameObject__get_gameObject_408e764(lStack_50,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2eb96 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    bRam0000000005c2eb96 = 1;
  }
  puVar3 = PTR_DAT_057a6c70;
  puVar2 = PTR_DAT_057a5ca0;
  puVar1 = PTR_DAT_05778ae0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_057a6c70);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar5 = UnityEngine_GameObject__get_gameObject_408e764(lStack_50,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x70) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_1 + 0x70),*(undefined8 *)puVar3);
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
        lVar5 = UnityEngine_GameObject__get_gameObject_408e764(lStack_50,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

