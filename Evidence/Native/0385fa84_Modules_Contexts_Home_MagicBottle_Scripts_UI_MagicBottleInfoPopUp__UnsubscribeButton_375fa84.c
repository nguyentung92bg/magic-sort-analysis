/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUp$$UnsubscribeButton
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__UnsubscribeButton (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUp$$UnsubscribeButton
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__UnsubscribeButton
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__UnsubscribeButton_375fa84
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0578b048;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385fa7c with catch @ 0385fa88
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385f9f4 with catch @ 0385fa8c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385f940 with catch @ 0385fa90
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385f980 with catch @ 0385fa94
                        */
  if ((bRam0000000005c33bb8 & 1) == 0) {
                    /* try { // try from 0385faac to 0395faaf has its CatchHandler @ 0385fb28 */
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05784ad0);
    bRam0000000005c33bb8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0385faec to 0395fb13 has its CatchHandler @ 0385fb34 */
  if ((lVar3 != 0) &&
     (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_05784ad0,0), lVar6 != 0)) {
    if ((bRam0000000005c39420 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar3,0);
      bRam0000000005c39420 = 1;
    }
    puVar1 = PTR_DAT_0578b048;
    plVar7 = (long *)(lVar6 + 0x38);
    lVar6 = *plVar7;
    while ((plVar4 = (long *)System_Delegate__Remove_23e3b70(lVar6,lVar3,0), plVar4 == (long *)0x0
           || (*plVar4 == *(long *)puVar1))) {
      lVar5 = FUN_01351224(plVar7,plVar4,lVar6);
      bVar2 = lVar6 == lVar5;
      lVar6 = lVar5;
      if (bVar2) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

