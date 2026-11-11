/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$Reverse
void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__Reverse (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$Reverse
   void 
   Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__Reverse
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__Reverse_2ae71a8
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 02be71b8 to 02ce71bf has its CatchHandler @ 02be7318 */
  if ((bRam0000000005c2eb5a & 1) == 0) {
                    /* try { // try from 02be71c4 to 02ce71cb has its CatchHandler @ 02be730c */
    FUN_012d0dc8(PTR_DAT_0579ffe0);
                    /* try { // try from 02be71d0 to 02ce71d7 has its CatchHandler @ 02be7310 */
    bRam0000000005c2eb5a = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
                    /* try { // try from 02be71dc to 02ce71e3 has its CatchHandler @ 02be7304 */
                    /* try { // try from 02be71e8 to 02ce71eb has its CatchHandler @ 02be7308 */
    lVar3 = *(long *)PTR_DAT_0579ffe0;
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70) + 8))();
                    /* WARNING: Could not recover jumptable at 0x022fe4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x168) + 8))(lVar2,0,uVar1);
    return;
                    /* try { // try from 02be71f0 to 02ce71fb has its CatchHandler @ 02be7320 */
  }
  return;
}

